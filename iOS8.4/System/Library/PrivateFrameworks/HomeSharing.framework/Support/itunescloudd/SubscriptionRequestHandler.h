/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CloudArtworkImporter;

@interface SubscriptionRequestHandler : NSObject {

	CloudArtworkImporter* _artworkImporter;

}
+(id)handler;
-(void)importItemArtworkForPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importContainerArtworkForPersistentID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountDidChange;
-(id)init;
@end

