/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString;

@interface WKAccessibilityImageRegion : NSObject {

	NSString* _label;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
