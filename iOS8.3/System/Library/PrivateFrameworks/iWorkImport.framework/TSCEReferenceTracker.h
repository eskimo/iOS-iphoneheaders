/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@protocol TSCEReferenceTrackerDelegate;
@class TSCECalculationEngine, NSLock, NSMutableArray, NSString;

@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning> {

	CFUUIDRef mUUID;
	TSCECalculationEngine* mCalculationEngine;
	char mIsRegisteredWithCalculationEngine;
	id<TSCEReferenceTrackerDelegate> mDelegate;
	NSLock* mTrackedRefsLock;
	NSMutableArray* mTrackedReferences;
	unsigned mNextEmptyTrackedReferencesIndex;
	unsigned mNumberOfTrackedReferences;
	vector<TSCEFormulaID, std::__1::allocator<TSCEFormulaID> >* mFormulaIDsToRewrite;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TSCEReferenceTrackerDelegate> delegate; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(id)objectToArchiveInDependencyTracker;
-(SCD_Struct_TS347)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS323)arg2 isInCycle:(char)arg3 hasCalculatedPrecedents:(char)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(unsigned)numberOfTrackedReferences;
-(void)setCalculationEngine:(id)arg1 ;
-(CFUUIDRef)formulaOwnerID;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 delegate:(id)arg3 ;
-(void)registerWithCalculationEngine:(char)arg1 ;
-(id)beginTrackingReferenceWithCReference:(SCD_Struct_TS325*)arg1 ;
-(id)allTrackedReferences;
-(void)endTrackingReference:(id)arg1 ;
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(CFUUIDRef)arg2 ;
-(char)trackedReferencesExistForTable:(CFUUIDRef)arg1 ;
-(id)cellRangeWasInserted:(SCD_Struct_TS321*)arg1 ;
-(id)calculationEngine;
-(void)beginTrackingReference:(id)arg1 ;
-(void)unregisterFromCalculationEngine;
-(void)setFormulaOwnerID:(CFUUIDRef)arg1 ;
-(id)trackedReferenceAtID:(SCD_Struct_TS323)arg1 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS323)arg2 rewriteSpec:(id)arg3 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<TSCEReferenceTrackerDelegate>)arg1 ;
-(id<TSCEReferenceTrackerDelegate>)delegate;
@end
