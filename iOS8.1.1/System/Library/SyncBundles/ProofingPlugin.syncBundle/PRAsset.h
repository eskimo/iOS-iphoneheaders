/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PRAsset : NSObject {

	NSString* _assetID;
	NSString* _path;
	int _modifyType;
	NSString* _contentsHash;

}

@property (nonatomic,readonly) NSString * assetID; 
@property (nonatomic,retain) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int modifyType;                       //@synthesize modifyType=_modifyType - In the implementation block
@property (nonatomic,retain) NSString * contentsHash;              //@synthesize contentsHash=_contentsHash - In the implementation block
+(id)path:(id)arg1 renamingRootTo:(id)arg2 ;
+(id)assetFromDictionary:(id)arg1 ;
+(id)simpleContentsHashForFileAtPath:(id)arg1 ;
+(id)assetForPath:(id)arg1 modifyType:(int)arg2 contentsHash:(id)arg3 ;
+(id)pathRootName:(id)arg1 ;
-(void)setContentsHash:(NSString *)arg1 ;
-(void)setModifyType:(int)arg1 ;
-(int)modifyType;
-(NSString *)assetID;
-(NSString *)contentsHash;
-(id)dictionaryRepresentationRenamingRootTo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

