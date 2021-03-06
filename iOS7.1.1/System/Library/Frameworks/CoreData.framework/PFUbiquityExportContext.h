/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityExportContext : NSObject {

	NSMutableDictionary* _storeNameToStoreExportContext;
	NSMutableDictionary* _ubiquityRootPathToStack;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	bool _useLocalStorage;

}

@property (nonatomic,readonly) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
@property (assign,nonatomic) bool useLocalStorage;                  //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
-(id)localPeerID;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)setUseLocalStorage:(bool)arg1 ;
-(id)storeExportContextForStoreName:(id)arg1 ;
-(id)storeExportContextForStore:(id)arg1 ;
-(bool)useLocalStorage;
-(void)dealloc;
-(id)description;
@end

