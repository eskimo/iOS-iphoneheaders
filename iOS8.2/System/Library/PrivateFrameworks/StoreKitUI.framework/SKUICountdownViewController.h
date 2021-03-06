/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>

@class SKUIResourceLoader, SKUICountdownComponent, SKUIClientContext, NSString;

@interface SKUICountdownViewController : UIViewController <SKUIArtworkRequestDelegate> {

	SKUIResourceLoader* _artworkLoader;
	SKUICountdownComponent* _countdownComponent;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                       //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUICountdownComponent * countdownComponent;              //@synthesize countdownComponent=_countdownComponent - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(SKUIResourceLoader *)artworkLoader;
-(id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2 ;
-(SKUICountdownComponent *)countdownComponent;
@end

