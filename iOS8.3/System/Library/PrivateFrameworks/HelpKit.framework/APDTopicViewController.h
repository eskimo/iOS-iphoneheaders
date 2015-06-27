/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:59:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol APDTopicViewControllerDelegate;
@class NSMutableArray, APDAsyncURLConnection, UIWebView, UIActivityIndicatorView, UILabel, UIImageView, UIView, APDDataManager, APDKVOManager, NSString;

@interface APDTopicViewController : UIViewController <UIWebViewDelegate> {

	char _webViewLoaded;
	char _webViewStartedLoading;
	char _hasLoaded;
	char _loading;
	int _pendingWebViewDisplayIndex;
	NSMutableArray* _topicHistory;
	NSMutableArray* _topicHistoryScrollMap;
	APDAsyncURLConnection* _topicWebViewURLConnection;
	char _showWithManualInset;
	char _displayAsPopover;
	char _updateDataManagerWithCurrentTopic;
	id<APDTopicViewControllerDelegate> _delegate;
	UIWebView* _topicWebView;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _errorTitleLabel;
	UILabel* _errorMessageLabel;
	UIImageView* _errorImageView;
	UIView* _errorView;
	int _topicWebViewDisplayIndex;
	APDDataManager* _dataManager;
	APDKVOManager* _KVOManager;

}

@property (assign,nonatomic,__weak) id<APDTopicViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIWebView * topicWebView;                                     //@synthesize topicWebView=_topicWebView - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * errorTitleLabel;                                    //@synthesize errorTitleLabel=_errorTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * errorMessageLabel;                                  //@synthesize errorMessageLabel=_errorMessageLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * errorImageView;                                 //@synthesize errorImageView=_errorImageView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                                  //@synthesize errorView=_errorView - In the implementation block
@property (assign,nonatomic) char showWithManualInset;                                            //@synthesize showWithManualInset=_showWithManualInset - In the implementation block
@property (assign,nonatomic) char displayAsPopover;                                               //@synthesize displayAsPopover=_displayAsPopover - In the implementation block
@property (assign,nonatomic) char updateDataManagerWithCurrentTopic;                              //@synthesize updateDataManagerWithCurrentTopic=_updateDataManagerWithCurrentTopic - In the implementation block
@property (assign,nonatomic) int topicWebViewDisplayIndex;                                        //@synthesize topicWebViewDisplayIndex=_topicWebViewDisplayIndex - In the implementation block
@property (nonatomic,retain) APDDataManager * dataManager;                                        //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) APDKVOManager * KVOManager;                                          //@synthesize KVOManager=_KVOManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<APDTopicViewControllerDelegate>)arg1 ;
-(id)init;
-(id<APDTopicViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidDisappear:(char)arg1 ;
-(char)canGoBack;
-(char)canGoForward;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)stopLoading;
-(void)clearHistory;
-(APDDataManager *)dataManager;
-(void)setDataManager:(APDDataManager *)arg1 ;
-(void)setDisplayAsPopover:(char)arg1 ;
-(APDKVOManager *)KVOManager;
-(int)topicWebViewDisplayIndex;
-(UIWebView *)topicWebView;
-(void)loadTopic:(id)arg1 ;
-(void)initializeTopicHistoryScrollMapWithScrollPosition:(id)arg1 ;
-(id)onGoBack;
-(id)onGoForward;
-(void)highlightSearchTerms:(char)arg1 ;
-(void)setKVOManager:(APDKVOManager *)arg1 ;
-(void)showWebViewIfNeeded;
-(UILabel *)errorTitleLabel;
-(UILabel *)errorMessageLabel;
-(void)hideGradientBackground:(id)arg1 ;
-(void)recordScrollPositionForCurrentTopic;
-(void)updateErrorMessageViewLayout;
-(void)updateWebViewMaps;
-(void)showErrorView:(char)arg1 animated:(char)arg2 ;
-(void)loadTopic:(id)arg1 data:(id)arg2 useLocalResource:(char)arg3 ;
-(void)onConnectionChanged:(id)arg1 ;
-(UIView *)errorView;
-(UIImageView *)errorImageView;
-(id)navigationItemFromURLString:(id)arg1 ;
-(void)updateTopicWebViewScrollPosition;
-(void)setTopicWebView:(UIWebView *)arg1 ;
-(void)setErrorTitleLabel:(UILabel *)arg1 ;
-(void)setErrorMessageLabel:(UILabel *)arg1 ;
-(void)setErrorImageView:(UIImageView *)arg1 ;
-(void)setErrorView:(UIView *)arg1 ;
-(char)showWithManualInset;
-(void)setShowWithManualInset:(char)arg1 ;
-(char)displayAsPopover;
-(char)updateDataManagerWithCurrentTopic;
-(void)setUpdateDataManagerWithCurrentTopic:(char)arg1 ;
-(void)setTopicWebViewDisplayIndex:(int)arg1 ;
@end
