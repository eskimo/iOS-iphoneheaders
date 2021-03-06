/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/_UIServiceWebViewControllerProtocol.h>
#import <UIKit/WebUIBrowserLoadingControllerDelegate.h>

@class _UIServiceWebView, WebUIBrowserLoadingController, NSString;

@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {

	_UIServiceWebView* _uiWebView;
	WebUIBrowserLoadingController* _loadingController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(void)reload;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(id)_makeAlertView;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)_willAppearInRemoteViewController;
-(void)loadEncodedRequest:(id)arg1 ;
-(void)loadUserTypedAddress:(id)arg1 ;
-(void)setShouldDecidePolicyRemotely:(BOOL)arg1 ;
-(void)configureWithEncodedSettings:(id)arg1 ;
-(void)_webContentSizeWithReplyHandler:(/*^block*/id)arg1 ;
-(BOOL)_isInternalInstall;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1 ;
-(void)browserLoadingControllerDidStartLoading:(id)arg1 ;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3 ;
-(void)_remotelyDecidePolicyForRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 decisionHandler:(/*^block*/id)arg4 ;
-(void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_remotelyDispatchDidDismissViewController;
@end

