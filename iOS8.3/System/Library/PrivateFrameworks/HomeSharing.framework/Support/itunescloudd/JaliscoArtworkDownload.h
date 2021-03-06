/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, ML3MusicLibrary, NSNumber, NSString, ML3Track;

@interface JaliscoArtworkDownload : NSObject {

	NSURL* _url;
	ML3MusicLibrary* _library;
	NSNumber* _persistentID;
	NSNumber* _historyID;
	NSString* _cacheID;

}

@property (nonatomic,copy) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * persistentID;                //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * historyID;                   //@synthesize historyID=_historyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheID;                       //@synthesize cacheID=_cacheID - In the implementation block
@property (nonatomic,readonly) char needsDownload; 
@property (nonatomic,retain,readonly) ML3Track * track; 
-(NSNumber *)historyID;
-(id)initWithLibrary:(id)arg1 persistentID:(id)arg2 historyID:(id)arg3 URL:(id)arg4 cacheID:(id)arg5 ;
-(char)needsDownload;
-(NSString *)cacheID;
-(id)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(ML3MusicLibrary *)library;
-(NSNumber *)persistentID;
-(ML3Track *)track;
@end

