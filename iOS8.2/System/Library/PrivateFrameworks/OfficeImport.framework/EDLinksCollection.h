/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDLinksCollection : NSObject {

	NSMutableArray* mLinks;
	NSMutableArray* mReferences;

}
-(void)dealloc;
-(id)init;
-(unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)arg1 lastSheetIndex:(unsigned)arg2 ;
-(BOOL)convertLinkReferenceIndex:(unsigned)arg1 firstSheetIndex:(unsigned*)arg2 lastSheetIndex:(unsigned*)arg3 ;
-(unsigned)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned)arg2 lastSheetIndex:(unsigned)arg3 ;
-(unsigned)linksCount;
-(unsigned)indexOfFirstLinkWithType:(int)arg1 ;
-(unsigned)addLink:(id)arg1 ;
-(unsigned)referencesCount;
-(id)referenceAtIndex:(unsigned)arg1 ;
-(id)linkAtIndex:(unsigned)arg1 ;
-(unsigned)linkIndexCreateIfNeededWithType:(int)arg1 ;
-(unsigned)indexOfReference:(id)arg1 ;
-(unsigned)addReference:(id)arg1 ;
-(void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned*)arg2 nameIndex:(unsigned*)arg3 ;
@end
