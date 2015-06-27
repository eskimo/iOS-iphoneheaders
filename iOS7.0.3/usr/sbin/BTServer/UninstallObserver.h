/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol UninstallObserverProtocol;
@class NSObject;

@interface UninstallObserver : LSApplicationWorkspaceObserver {

	NSObject<UninstallObserverProtocol>* _delegate;

}

@property (assign,nonatomic) NSObject<UninstallObserverProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
@end
