/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PLPhotoBrowserController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface PLWPhotoBrowserController : PLPhotoBrowserController <UIGestureRecognizerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAssetCollections:(id)arg1 atImageIndexPath:(id)arg2 dataSource:(id)arg3 modalDoneButtonItem:(id)arg4 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)wantsPhotoBrowserStyleStatusBar;
@end
