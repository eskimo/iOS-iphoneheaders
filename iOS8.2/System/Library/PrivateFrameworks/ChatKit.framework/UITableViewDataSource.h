/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITableViewDataSource <NSObject>
@optional
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
-(id)sectionIndexTitlesForTableView:(id)arg1;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@required
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
