/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <SiriUI/SiriUIAceObjectViewController.h>

@class SAUIImageView, UIButton;

@interface SiriGKImageDetailViewController : SiriUIAceObjectViewController {

	SAUIImageView* _imageViewSnippet;
	UIButton* _imageButton;

}
-(void)_hideImageButtonHighlight;
-(void)_showImageButtonHighlight;
-(CGSize)_displayedImageSizeForImageSize:(CGSize)arg1 inWidth:(double)arg2 ;
-(void)_configureImageView:(id)arg1 forImageSize:(CGSize)arg2 inWidth:(double)arg3 ;
-(void)_imageButtonTapped;
-(id)initWithImageViewSnippet:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
-(id)navigationTitle;
-(void)setAceObject:(id)arg1 ;
@end
