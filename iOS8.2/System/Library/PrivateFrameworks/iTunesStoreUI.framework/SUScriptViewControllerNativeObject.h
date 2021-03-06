/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <iTunesStoreUI/SKUIPassbookLoaderDelegate.h>

@class SKUIPassbookLoader, NSString;

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SKUIPassbookLoaderDelegate> {

	SKUIPassbookLoader* _passbookLoader;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)setScriptObject:(id)arg1 ;
-(void)_loadPassbookPassWithURL:(id)arg1 ;
-(void)_reloadVisibility;
-(void)_parentViewControllerChangeNotification:(id)arg1 ;
@end

