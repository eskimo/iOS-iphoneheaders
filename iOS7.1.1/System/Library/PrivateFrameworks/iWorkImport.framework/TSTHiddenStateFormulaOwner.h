/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@protocol OS_dispatch_queue;
@class TSTTableInfo, TSCECalculationEngine, NSObject, TSTTableFilterSet, NSMutableArray;

@interface TSTHiddenStateFormulaOwner : TSPObject <TSCEFormulaOwning> {

	CFUUIDRef mOwnerID;
	TSTTableInfo* mTableInfo;
	TSCECalculationEngine* mCalculationEngine;
	vector<std::__1::pair<unsigned short, bool>, std::__1::allocator<std::__1::pair<unsigned short, bool> > >* mPendingComputedShowRowResults;
	NSObject<OS_dispatch_queue>* mPendingComputedShowRowResultsQueue;
	vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >* mCellRangesToInvalidate;
	vector<unsigned short, std::__1::allocator<unsigned short> >* mHiddenRowIndices;
	TSTTableFilterSet* mRewrittenFilterSet;
	NSMutableArray* mThresholdCellValues;
	bool mNeedsToUpdateFilterSetForImport;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS287)arg2 rewriteSpec:(id)arg3 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(SCD_Struct_TS322)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS287)arg2 isInCycle:(bool)arg3 hasCalculatedPrecedents:(bool)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(id)calculationEngine;
-(id)initWithContext:(id)arg1 tableInfo:(id)arg2 ;
-(void)filterSetUpdated;
-(void)dirtyFilterState;
-(void)hiddenStateChangedForIndex:(unsigned short)arg1 ;
-(void)setOwnerID:(CFUUIDRef)arg1 ;
-(SCD_Struct_TS275*)rangeReferenceFromIndex:(unsigned short)arg1 toIndex:(unsigned short)arg2 ;
-(void)setTableInfo:(id)arg1 ;
-(id)tableInfo;
-(SCD_Struct_TS286*)cellReferenceForIndex:(unsigned short)arg1 ;
-(void)p_removeAllFormulaFromCalculationEngine;
-(void)p_registerAllFormulaToCalculationEngine;
-(int)registerWithCalculationEngineChoosingUniqueID:(id)arg1 ;
-(CFUUIDRef)ownerID;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

