/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject {

	CGRect _edgeInsets;
	NSString* _name;

}

@property (nonatomic,readonly) CGRect edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(CGRect)edgeInsets;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEdgeInsets:(CGRect)arg1 ;
-(void)sanitizeEdgeInsets;
-(id)initWithEdgeInsets:(CGRect)arg1 ;
@end

