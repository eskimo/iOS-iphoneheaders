/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPickerTableViewCell.h>

@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {

	UIView* _wrappedView;
	UIView* _wrappedViewContainer;
	CGSize _wrappedViewSize;

}

@property (nonatomic,retain) UIView * wrappedView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)wrappedView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWrappedView:(id)arg1 ;
-(void)_commonInit;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(void)_updateWrappedViewFrame;
-(void)_updateWrappedView;
-(id)_anyDateLabel;
@end

