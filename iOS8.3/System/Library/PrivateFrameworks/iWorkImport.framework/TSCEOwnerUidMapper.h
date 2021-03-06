/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEOwnerUidMapper : NSObject {

	TSUUuidMap* _uidMap;
	UUIDData<TSP::UUIDData> _tableUid;
	UUIDData<TSP::UUIDData> _nextTableUid;
	UUIDData<TSP::UUIDData> _hiddenStateForRowsOwnerUid;
	UUIDData<TSP::UUIDData> _nextHiddenStateForRowsOwnerUid;
	UUIDData<TSP::UUIDData> _hiddenStateForColumnsOwnerUid;
	UUIDData<TSP::UUIDData> _nextHiddenStateForColumnsOwnerUid;
	UUIDData<TSP::UUIDData> _conditionalStyleOwnerUid;
	UUIDData<TSP::UUIDData> _nextConditionalStyleOwnerUid;
	UUIDData<TSP::UUIDData> _sortRuleReferenceTrackerOwnerUid;
	UUIDData<TSP::UUIDData> _nextSortRuleReferenceTrackerOwnerUid;
	UUIDData<TSP::UUIDData> _mergeOwnerUid;
	UUIDData<TSP::UUIDData> _nextMergeOwnerUid;
	UUIDData<TSP::UUIDData> _pbTableUid;

}

@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID;                                        //@synthesize tableUid=_tableUid - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> pbTableUID;                                      //@synthesize pbTableUid=_pbTableUid - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> hiddenStateForRowsOwnerUid;                      //@synthesize hiddenStateForRowsOwnerUid=_hiddenStateForRowsOwnerUid - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> hiddenStateForColumnsOwnerUid;                   //@synthesize hiddenStateForColumnsOwnerUid=_hiddenStateForColumnsOwnerUid - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> conditionalStyleOwnerUID;                        //@synthesize conditionalStyleOwnerUid=_conditionalStyleOwnerUid - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> sortRuleReferenceTrackerOwnerUID;                //@synthesize sortRuleReferenceTrackerOwnerUid=_sortRuleReferenceTrackerOwnerUid - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> mergeOwnerUID;                                   //@synthesize mergeOwnerUid=_mergeOwnerUid - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> nextTableUID;                                      //@synthesize nextTableUid=_nextTableUid - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> nextHiddenStateForRowsOwnerUid;                    //@synthesize nextHiddenStateForRowsOwnerUid=_nextHiddenStateForRowsOwnerUid - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> nextHiddenStateForColumnsOwnerUid;                 //@synthesize nextHiddenStateForColumnsOwnerUid=_nextHiddenStateForColumnsOwnerUid - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> nextConditionalStyleOwnerUID;                      //@synthesize nextConditionalStyleOwnerUid=_nextConditionalStyleOwnerUid - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> nextSortRuleReferenceTrackerOwnerUID;              //@synthesize nextSortRuleReferenceTrackerOwnerUid=_nextSortRuleReferenceTrackerOwnerUid - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> nextMergeOwnerUID;                                 //@synthesize nextMergeOwnerUid=_nextMergeOwnerUid - In the implementation block
+(CFUUIDRef)CFUUIDRefForUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(UUIDData<TSP::UUIDData>)tableUID;
-(UUIDData<TSP::UUIDData>)conditionalStyleOwnerUID;
-(void)recreateUIDs;
-(UUIDData<TSP::UUIDData>)pbTableUID;
-(UUIDData<TSP::UUIDData>)nextTableUID;
-(UUIDData<TSP::UUIDData>)hiddenStateForRowsOwnerUid;
-(UUIDData<TSP::UUIDData>)nextHiddenStateForRowsOwnerUid;
-(UUIDData<TSP::UUIDData>)hiddenStateForColumnsOwnerUid;
-(UUIDData<TSP::UUIDData>)nextHiddenStateForColumnsOwnerUid;
-(UUIDData<TSP::UUIDData>)nextConditionalStyleOwnerUID;
-(UUIDData<TSP::UUIDData>)sortRuleReferenceTrackerOwnerUID;
-(UUIDData<TSP::UUIDData>)nextSortRuleReferenceTrackerOwnerUID;
-(UUIDData<TSP::UUIDData>)mergeOwnerUID;
-(UUIDData<TSP::UUIDData>)nextMergeOwnerUID;
-(id)initWithTableUID:(const UUIDData<TSP::UUIDData>*)arg1 pasteBoardTableUID:(const UUIDData<TSP::UUIDData>*)arg2 hiddenStateOwnerForRowsUID:(const UUIDData<TSP::UUIDData>*)arg3 hiddenStateOwnerForColumnsUID:(const UUIDData<TSP::UUIDData>*)arg4 conditionalStyleOwnerUID:(const UUIDData<TSP::UUIDData>*)arg5 sortRuleReferenceTrackerOwnerUID:(const UUIDData<TSP::UUIDData>*)arg6 mergeOwnerUID:(const UUIDData<TSP::UUIDData>*)arg7 ;
-(void)setToIdentityMapping;
-(const TSUUuidMap*)ownerUIDMap;
-(void)saveToArchive:(OwnerUIDMapperArchive*)arg1 ;
-(void)setNextTableUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)setNextHiddenStateForRowsOwnerUid:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)setNextHiddenStateForColumnsOwnerUid:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)setNextConditionalStyleOwnerUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)setNextSortRuleReferenceTrackerOwnerUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)setNextMergeOwnerUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(id)description;
-(id)initWithArchive:(const OwnerUIDMapperArchive*)arg1 ;
@end

