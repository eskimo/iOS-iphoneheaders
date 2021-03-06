/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSData, CKDPProtectionInfo, CKDPRecordIdentifier;

@interface CKDPAsset : PBCodable <NSCopying> {

	long long _downloadURLExpiration;
	long long _size;
	NSString* _contentBaseURL;
	NSData* _data;
	NSString* _derivedContentType;
	NSString* _downloadBaseURL;
	NSData* _downloadRequest;
	NSString* _downloadToken;
	NSData* _header;
	NSString* _owner;
	CKDPProtectionInfo* _protectionInfo;
	CKDPRecordIdentifier* _recordId;
	NSString* _referenceIdentifier;
	NSData* _referenceSignature;
	NSString* _requestor;
	NSData* _signature;
	NSString* _uploadReceipt;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) char hasOwner; 
@property (nonatomic,retain) NSString * owner;                                 //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) char hasSignature; 
@property (nonatomic,retain) NSData * signature;                               //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) char hasHeader; 
@property (nonatomic,retain) NSData * header;                                  //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) char hasSize; 
@property (assign,nonatomic) long long size;                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char hasDownloadToken; 
@property (nonatomic,retain) NSString * downloadToken;                         //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,readonly) char hasDownloadRequest; 
@property (nonatomic,retain) NSData * downloadRequest;                         //@synthesize downloadRequest=_downloadRequest - In the implementation block
@property (nonatomic,readonly) char hasDerivedContentType; 
@property (nonatomic,retain) NSString * derivedContentType;                    //@synthesize derivedContentType=_derivedContentType - In the implementation block
@property (nonatomic,readonly) char hasContentBaseURL; 
@property (nonatomic,retain) NSString * contentBaseURL;                        //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,readonly) char hasRequestor; 
@property (nonatomic,retain) NSString * requestor;                             //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,readonly) char hasRecordId; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordId;                  //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) char hasUploadReceipt; 
@property (nonatomic,retain) NSString * uploadReceipt;                         //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (nonatomic,readonly) char hasData; 
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) char hasDownloadBaseURL; 
@property (nonatomic,retain) NSString * downloadBaseURL;                       //@synthesize downloadBaseURL=_downloadBaseURL - In the implementation block
@property (assign,nonatomic) char hasDownloadURLExpiration; 
@property (assign,nonatomic) long long downloadURLExpiration;                  //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,readonly) char hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;              //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) char hasReferenceIdentifier; 
@property (nonatomic,retain) NSString * referenceIdentifier;                   //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (nonatomic,readonly) char hasReferenceSignature; 
@property (nonatomic,retain) NSData * referenceSignature;                      //@synthesize referenceSignature=_referenceSignature - In the implementation block
-(long long)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSignature:(NSData *)arg1 ;
-(char)hasSignature;
-(NSData *)signature;
-(long long)downloadURLExpiration;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(char)hasProtectionInfo;
-(CKDPProtectionInfo *)protectionInfo;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(NSString *)downloadBaseURL;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
-(char)hasRecordId;
-(CKDPRecordIdentifier *)recordId;
-(NSData *)referenceSignature;
-(NSString *)contentBaseURL;
-(NSString *)owner;
-(NSString *)requestor;
-(void)setContentBaseURL:(NSString *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(char)hasOwner;
-(void)setDownloadToken:(NSString *)arg1 ;
-(void)setDownloadRequest:(NSData *)arg1 ;
-(void)setDerivedContentType:(NSString *)arg1 ;
-(void)setDownloadBaseURL:(NSString *)arg1 ;
-(char)hasDownloadToken;
-(char)hasDownloadRequest;
-(char)hasDerivedContentType;
-(char)hasContentBaseURL;
-(char)hasRequestor;
-(char)hasUploadReceipt;
-(char)hasData;
-(char)hasDownloadBaseURL;
-(void)setDownloadURLExpiration:(long long)arg1 ;
-(void)setHasDownloadURLExpiration:(char)arg1 ;
-(char)hasDownloadURLExpiration;
-(char)hasReferenceIdentifier;
-(char)hasReferenceSignature;
-(NSString *)downloadToken;
-(NSData *)downloadRequest;
-(NSString *)derivedContentType;
-(NSString *)referenceIdentifier;
-(void)setHeader:(NSData *)arg1 ;
-(char)hasHeader;
-(NSData *)header;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasSize;
-(void)setHasSize:(char)arg1 ;
-(void)setOwner:(NSString *)arg1 ;
@end

