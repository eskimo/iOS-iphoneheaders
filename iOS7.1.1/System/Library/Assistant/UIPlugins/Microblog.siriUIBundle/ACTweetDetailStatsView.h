/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ACTweetDetailStatsView : UIView {

	UILabel* _retweetsLabel;

}
+(id)_createLabel;
-(CGSize)_calculateSizeForWidth:(double)arg1 setFrames:(bool)arg2 ;
-(id)initWithFrame:(CGRect)arg1 tweet:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void).cxx_destruct;
@end

