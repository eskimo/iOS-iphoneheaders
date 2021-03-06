/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKPropertyCoding.h>

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject <CKPropertyCoding>

@property (nonatomic,readonly) CKObjCClass * objcClass; 
@property (nonatomic,readonly) NSSet * propertyNamesNotToEncode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKObjCClass *)objcClass;
-(NSSet *)propertyNamesNotToEncode;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)dictionaryPropertyEncoding;
@end

