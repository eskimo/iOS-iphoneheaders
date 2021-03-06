/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UITableViewRowAction, UIVisualEffect;

@interface _UITableViewCellActionButton : UIButton {

	UITableViewRowAction* _action;
	unsigned long long _style;
	UIVisualEffect* _backgroundEffect;

}

@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (nonatomic,retain) UITableViewRowAction * action; 
@property (assign,nonatomic) unsigned long long style; 
+(id)actionButtonWithStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UITableViewRowAction *)action;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(void)setAction:(UITableViewRowAction *)arg1 ;
@end

