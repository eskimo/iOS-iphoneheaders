/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMembersControllerDelegate <NSObject>
@required
-(void)membersControllerWillStartSearching:(id)arg1;
-(void)membersControllerDidEndServerSearch:(id)arg1;
-(void)membersControllerWillEndSearching:(id)arg1;
-(BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
-(BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
-(void)showInsertEditorForPerson:(void*)arg1 animate:(BOOL)arg2;
-(void)personWasSelected:(void*)arg1;
-(BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
-(BOOL)allowsShowingPersonsCards;
-(void)membersControllerDidEndSearching:(id)arg1;
-(id)model;
-(int)behavior;
@end

