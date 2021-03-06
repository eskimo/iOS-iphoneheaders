/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UINavigationBar.h>
#import <Podcasts/IMTopBar.h>

@class NSArray, UIView, UIImage, NSString;

@interface IMNavigationBar : UINavigationBar <IMTopBar> {

	char _bottom;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char bottom;                           //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) NSArray * leftItems; 
@property (nonatomic,retain) UIView * titleView; 
@property (nonatomic,retain) NSArray * rightItems; 
@property (nonatomic,retain) UIImage * shadowImage; 
-(void)setLeftItems:(id)arg1 rightItems:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(id)backgroundImageForToolbarPosition:(int)arg1 barMetrics:(int)arg2 ;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3 ;
-(char)bottom;
-(void)setBottom:(char)arg1 ;
-(NSArray *)leftItems;
-(NSArray *)rightItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setRightItems:(NSArray *)arg1 ;
@end

