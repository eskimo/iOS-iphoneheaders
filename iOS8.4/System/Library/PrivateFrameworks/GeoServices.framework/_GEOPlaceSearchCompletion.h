/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOCompletion.h>

@class NSArray, NSString;

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion> {

	NSArray* _groups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groups;                    //@synthesize groups=_groups - In the implementation block
-(void)dealloc;
-(NSArray *)groups;
-(id)initWithResponse:(id)arg1 traits:(id)arg2 ;
@end

