/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol _InfiniteScrollViewControllerDelegate;
@interface _InfiniteScrollViewController : UIViewController {

	id<_InfiniteScrollViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_InfiniteScrollViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_InfiniteScrollViewControllerDelegate>)arg1 ;
-(id<_InfiniteScrollViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
@end

