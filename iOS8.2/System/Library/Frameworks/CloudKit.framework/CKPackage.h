/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/CKRecordValue.h>

@class NSArray, CKRecord, NSString, NSURL, CKSQLite, NSData;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue> {

	OpaquePCSShareProtectionRef _recordPCS;
	char _wasCached;
	char _open;
	char _transaction;
	char _ownsTheAnchor;
	NSArray* _assets;
	CKRecord* _record;
	NSString* _recordKey;
	NSURL* _fileURL;
	NSString* _applicationBundleID;
	NSString* _UUID;
	NSString* _anchorPath;
	CKSQLite* _sqlite;
	int _packageID;
	unsigned _nextItemIndex;

}

@property (nonatomic,copy) NSData * signature; 
@property (nonatomic,copy) NSArray * assets;                                     //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                           //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                 //@synthesize recordKey=_recordKey - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef recordPCS;              //@synthesize recordPCS=_recordPCS - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                     //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (assign,nonatomic) char wasCached;                                     //@synthesize wasCached=_wasCached - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * anchorPath;                              //@synthesize anchorPath=_anchorPath - In the implementation block
@property (nonatomic,retain) CKSQLite * sqlite;                                  //@synthesize sqlite=_sqlite - In the implementation block
@property (assign,nonatomic) int packageID;                                      //@synthesize packageID=_packageID - In the implementation block
@property (assign,nonatomic) unsigned nextItemIndex;                             //@synthesize nextItemIndex=_nextItemIndex - In the implementation block
@property (assign,getter=isOpen,nonatomic) char open;                            //@synthesize open=_open - In the implementation block
@property (assign,getter=inTransaction,nonatomic) char transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) char ownsTheAnchor;                                 //@synthesize ownsTheAnchor=_ownsTheAnchor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_packagesPathForBundleID:(id)arg1 ;
+(char)supportsSecureCoding;
+(void)destroyPackageAnchoredAtURL:(id)arg1 ;
-(NSString *)anchorPath;
-(id)initWithArchivedAnchoredPackage:(id)arg1 ;
-(void)setAnchorPath:(NSString *)arg1 ;
-(id)_initWithPath:(id)arg1 UUID:(id)arg2 ;
-(id)_packageDatabasePathWithUUID:(id)arg1 ;
-(CKSQLite *)sqlite;
-(int)packageID;
-(char)ownsTheAnchor;
-(void)setOwnsTheAnchor:(char)arg1 ;
-(void)destroy;
-(void)_setReferenceCount:(int)arg1 ;
-(char)isAnchorStillValid;
-(void)setSqlite:(CKSQLite *)arg1 ;
-(void)incReferenceCount;
-(char)inTransaction;
-(char)decReferenceCount;
-(id)_itemWithColumnsByName:(id)arg1 ;
-(id)_itemOrNilAtIndex:(unsigned)arg1 ;
-(void)setTransaction:(char)arg1 ;
-(void)setPackageID:(int)arg1 ;
-(unsigned)nextItemIndex;
-(void)setNextItemIndex:(unsigned)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)UUID;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)close;
-(NSURL *)fileURL;
-(char)wasCached;
-(void)setWasCached:(char)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(char)open;
-(id)initWithAnchorURL:(id)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(unsigned)itemCount;
-(id)itemAtIndex:(unsigned)arg1 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSString *)applicationBundleID;
-(id)CKPropertiesDescription;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(NSString *)recordKey;
-(void)setRecordKey:(NSString *)arg1 ;
-(void)addSection:(id)arg1 ;
-(unsigned)sectionCount;
-(id)sectionAtIndex:(unsigned)arg1 ;
-(id)itemEnumerator;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)itemEnumeratorForSectionAtIndex:(unsigned)arg1 ;
-(OpaquePCSShareProtectionRef)recordPCS;
-(void)updateItemAtIndex:(int)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned)arg5 ;
-(void)updateItemAtIndex:(int)arg1 withFileURL:(id)arg2 ;
-(char)isOpen;
-(NSArray *)assets;
-(void)setUUID:(NSString *)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(void)setOpen:(char)arg1 ;
@end
