/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchOperation.h>
#import <EventKit/ABSearchOperationDelegate.h>

@class NSMutableArray;

@interface GKAddressBookSearchOperation : ABSearchOperation <ABSearchOperationDelegate> {

	NSMutableArray* _matches;
	/*^block*/ id _handler;

}

@property (nonatomic,readonly) NSMutableArray * matches;              //@synthesize matches=_matches - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(bool)arg3 ;
-(id)matches;
-(void)dealloc;
-(id)init;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
@end

