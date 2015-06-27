/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString;

@interface ABAssistantCommandCommitPerson : SADomainObjectCommit <ABAssistantCommand> {

	void* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_commitFromUpdatesCache;
-(void)_checkIfUpdatingReadOnlyPerson:(id*)arg1 assistantID:(id)arg2 ;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(id)_validate;
-(void*)addressBook;
@end
