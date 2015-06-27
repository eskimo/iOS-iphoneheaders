/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:00:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface CKRecipientGenerator : NSObject {

	NSArray* _searchABPropertyTypes;

}

@property (nonatomic,retain) NSArray * searchABPropertyTypes;              //@synthesize searchABPropertyTypes=_searchABPropertyTypes - In the implementation block
+(id)sharedRecipientGenerator;
-(id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(void)dealloc;
-(id)recipientWithAddress:(id)arg1 ;
-(void)setSearchABPropertyTypes:(NSArray *)arg1 ;
-(void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4 ;
-(id)resultsForText:(id)arg1 ;
-(NSArray *)searchABPropertyTypes;
@end
