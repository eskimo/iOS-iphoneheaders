/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 ;
+(SCD_Struct_SL12)imageSizeWithData:(id)arg1 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

