/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber;

@interface SAEntryPoint : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
+(id)entryPoint;
+(id)entryPointWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(id)groupIdentifier;
-(id)latitude;
-(id)longitude;
-(id)encodedClassName;
@end

