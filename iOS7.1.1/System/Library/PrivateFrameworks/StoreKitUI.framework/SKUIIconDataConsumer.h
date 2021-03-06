/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <CoreFoundation/NSCopying.h>

@class UIColor, SKUIColorScheme, UIImage;

@interface SKUIIconDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	SKUIColorScheme* _colorScheme;
	CGSize _iconSize;
	UIImage* _maskImage;
	UIImage* _strokeImage;
	double _cornerRadius;

}

@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                            //@synthesize iconSize=_iconSize - In the implementation block
+(id)smartBannerIconConsumer;
+(id)brickConsumerWithBrickSize:(CGSize)arg1 ;
+(id)shareSheetIconConsumerWithSize:(CGSize)arg1 ;
+(id)roomIconConsumer;
+(id)applePackIconConsumer;
+(id)billboardIconConsumer;
+(id)brickConsumer;
+(id)cardConsumer;
+(id)categoryIconConsumer;
+(id)collectionViewCellIconConsumer;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)giftResultIconConsumer;
+(id)giftThemeIconConsumer;
+(id)gridIconConsumer;
+(id)headerIconConsumer;
+(id)listIconConsumer;
+(id)lockupIconConsumerWithSize:(long long)arg1 ;
+(id)parentBundleConsumer;
+(id)purchasedIconConsumer;
+(id)shareSheetIconConsumer;
+(id)topChartsIconConsumer;
+(id)updatesIconConsumer;
+(id)wishlistIconConsumer;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(void).cxx_destruct;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(void)_setImagesUsingName:(id)arg1 ;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
@end

