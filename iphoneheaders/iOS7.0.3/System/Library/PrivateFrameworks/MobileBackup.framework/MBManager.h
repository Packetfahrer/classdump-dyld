/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MobileBackup/MobileBackup-Structs.h>
@interface MBManager : NSObject {

	id _delegate;

}

@property (assign,nonatomic) NSObject<MBManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLogLevel:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)_init;
-(void)cancel;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(BOOL)isBackupEnabled;
-(void)setBackupEnabled:(BOOL)arg1 ;
-(void)syncBackupEnabled;
-(id)backupState;
-(id)backupList;
-(id)getBackupListWithError:(id*)arg1 ;
-(id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(unsigned)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
-(void)startBackup;
-(BOOL)startBackupWithError:(id*)arg1 ;
-(BOOL)restoreFileExistsWithPath:(id)arg1 ;
-(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 error:(id*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 error:(id*)arg4 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
-(void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 ;
-(BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)restoreFileWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)restoreFileWithPath:(id)arg1 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(void)finishRestore;
-(void)insufficientFreeSpaceToRestore;
-(void)cancelRestore;
-(BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)startScanWithError:(id*)arg1 ;
-(unsigned long long)nextBackupSize;
-(id)domainInfoForName:(id)arg1 ;
-(id)domainInfoList;
-(BOOL)removeDomainName:(id)arg1 error:(id*)arg2 ;
-(BOOL)isBackupEnabledForDomainName:(id)arg1 ;
-(void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(id)restoreInfo;
-(int)getLogLevel;
-(void)setAllowiTunesBackup:(BOOL)arg1 ;
-(BOOL)allowiTunesBackup;
-(void)rebootDevice;
-(id)initWithDelegate:(id)arg1 ;
-(id)restoreState;
@end
