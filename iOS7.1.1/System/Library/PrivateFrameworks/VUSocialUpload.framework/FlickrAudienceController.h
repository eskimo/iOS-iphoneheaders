/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/VUSocialUpload-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol FlickrComposeOptionViewDelegate;
@interface FlickrAudienceController : UITableViewController {

	int _audience;
	<FlickrComposeOptionViewDelegate>* _delegate;

}

@property (assign,nonatomic) int audience;                                              //@synthesize audience=_audience - In the implementation block
@property (assign,nonatomic) <FlickrComposeOptionViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)titleForAudience:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)loadView;
-(CGSize)contentSizeForViewInPopover;
-(void)setAudience:(int)arg1 ;
-(int)audience;
@end

