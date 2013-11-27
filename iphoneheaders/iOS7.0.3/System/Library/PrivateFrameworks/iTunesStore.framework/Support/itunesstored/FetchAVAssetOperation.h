/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/DownloadStepOperation.h>

@class DownloadAsset, NSData, NSString, NSArray, Download, AVAssetDownloadSession, DownloadStepResults, NSDictionary;

@interface FetchAVAssetOperation : DownloadStepOperation {

	DownloadAsset* _asset;
	NSData* _clientAuditTokenData;
	NSString* _clientBundleIdentifier;
	NSArray* _cookies;
	Download* _download;
	AVAssetDownloadSession* _downloadSession;
	DownloadStepResults* _fetchResults;
	BOOL _isPrepared;
	NSDictionary* _purchaseBundle;
	BOOL _verifiesHash;

}

@property (retain) NSData * clientAuditTokenData; 
@property (copy) NSString * clientBundleIdentifier; 
@property (@dynamic) <FetchAVAssetOperationDelegate> * delegate; 
-(void)_stopWithError:(id)arg1 ;
-(void)prepareUsingDownloadsSession:(id)arg1 ;
-(id)clientBundleIdentifier;
-(id)_contentInfoDictionary;
-(void)_setPrepared:(BOOL)arg1 ;
-(void)_updateAssetWithDownloadToken:(unsigned long long)arg1 ;
-(void)_downloadCompleteNotification:(id)arg1 ;
-(void)_fileSizeAvailableNotification:(id)arg1 ;
-(void)_snapshotProgress:(id)arg1 ;
-(BOOL)_shouldRetryForError:(id)arg1 ;
-(BOOL)_shouldResetFileForError:(id)arg1 ;
-(id)_newHashArrayWithData:(id)arg1 ;
-(void)setClientBundleIdentifier:(id)arg1 ;
-(void)_downloadFailedNotification:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)clientAuditTokenData;
-(void)setClientAuditTokenData:(id)arg1 ;
@end
