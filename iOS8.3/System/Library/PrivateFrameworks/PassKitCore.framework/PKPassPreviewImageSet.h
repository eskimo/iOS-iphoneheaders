/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPreviewImageSet : PKPassImageSet {

	PKImage* _iconImage;

}

@property (nonatomic,retain) PKImage * iconImage;              //@synthesize iconImage=_iconImage - In the implementation block
+(char)supportsSecureCoding;
+(int)currentVersion;
+(int)imageSetType;
+(id)archiveName;
-(void)setIconImage:(PKImage *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(PKImage *)iconImage;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4 ;
@end

