/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPLoadPredefinedQueue.h>
#import <Media/AFServiceCommand.h>

@protocol AFServiceHelper;
@class NSString;

@interface MPAssistantLoadPredefinedQueue : SAMPLoadPredefinedQueue <AFServiceCommand> {

	id<AFServiceHelper> _serviceHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)_performWithNowPlayingItem:(id)arg1 ;
-(BOOL)_radioIsAvailable;
-(void)_shuffleIfRequested;
-(void)_prepare;
-(id)_validate;
@end

