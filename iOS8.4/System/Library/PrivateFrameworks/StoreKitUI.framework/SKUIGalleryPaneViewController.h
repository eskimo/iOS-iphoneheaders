/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIMediaComponent, SKUIEmbeddedMediaView;

@interface SKUIGalleryPaneViewController : UIViewController {

	SKUIMediaComponent* _component;
	long long _galleryIndex;

}

@property (nonatomic,readonly) SKUIMediaComponent * component;                 //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) long long galleryIndex;                         //@synthesize galleryIndex=_galleryIndex - In the implementation block
@property (nonatomic,readonly) SKUIEmbeddedMediaView * mediaView; 
-(SKUIMediaComponent *)component;
-(SKUIEmbeddedMediaView *)mediaView;
-(long long)galleryIndex;
-(id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2 ;
@end

