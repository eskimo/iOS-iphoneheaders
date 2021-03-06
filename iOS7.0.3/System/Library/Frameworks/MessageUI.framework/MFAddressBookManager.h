/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@interface MFAddressBookManager : NSObject {

	void* _addressBook;
	int _lock;
	CFDictionaryRef _clients;

}
+(BOOL)isAuthorizedToUseAddressBook;
+(id)sharedManager;
-(void)_applicationResumed:(id)arg1 ;
-(void)_handleAddressBookChangeNotification;
-(id)_clientWeakReferences;
-(void)_handleAddressBookPrefsChangeNotification;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void*)addressBook;
@end

