/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIView;

@interface BKTappyScrollView : UIScrollView {

	UIView* _targetView;

}

@property (nonatomic,retain) UIView * targetView;              //@synthesize targetView=_targetView - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
@end
