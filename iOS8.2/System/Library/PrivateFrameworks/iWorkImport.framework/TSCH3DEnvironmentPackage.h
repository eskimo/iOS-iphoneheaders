/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class NSMutableArray;

@interface TSCH3DEnvironmentPackage : NSObject <NSCopying> {

	NSMutableArray* mMaterials;

}
+(id)instanceWithArchive:(const Chart3DEnvironmentPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DEnvironmentPackageArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DEnvironmentPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(char)hasCompleteData;
-(id)materialEnumerator;
-(void)addMaterial:(id)arg1 ;
-(unsigned)materialCount;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

