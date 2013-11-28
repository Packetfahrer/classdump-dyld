/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLTencentWeiboClientSessionProtocol.h>
#import <Social/SLMicroBlogSheetDelegate.h>

@protocol SLTencentWeiboRemoteSessionProtocol;
@class SLRemoteSessionProxy, NSCache;

@interface SLTencentWeiboSession : NSObject <SLTencentWeiboClientSessionProtocol, SLMicroBlogSheetDelegate> {

	SLRemoteSessionProxy<SLTencentWeiboRemoteSessionProtocol>* _remoteSession;
	NSCache* _profileImageCache;
	/*^block*/ id _connectionResetBlock;
	/*^block*/ id _locationInformationChangedBlock;

}

@property (nonatomic,copy) id connectionResetBlock;                         //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
@property (nonatomic,copy) id locationInformationChangedBlock;              //@synthesize locationInformationChangedBlock=_locationInformationChangedBlock - In the implementation block
+(id)_remoteInterface;
-(void)setConnectionResetBlock:(/*^block*/ id)arg1 ;
-(void)setGeotagStatus:(int)arg1 ;
-(void)setLocationInformationChangedBlock:(/*^block*/ id)arg1 ;
-(void)tearDownConnectionToRemoteSession;
-(void)acceptLocationUpdate:(id)arg1 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/ id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchRecordForScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)fetchCurrentUrlLimits:(/*^block*/ id)arg1 ;
-(void)fetchCurrentImageLimits:(/*^block*/ id)arg1 ;
-(void)fetchRelationshipWithScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setOverrideGeotagInfo:(id)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/ id)arg1 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/ id)arg1 ;
-(void)overrideLocationWithLatitude:(float)arg1 longitude:(float)arg2 name:(id)arg3 ;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(int)characterCountForText:(id)arg1 shortenedURLCost:(int)arg2 ;
-(/*^block*/ id)locationInformationChangedBlock;
-(void)setClientInfo:(id)arg1 ;
-(void)setGeotagAccountSetting:(BOOL)arg1 ;
-(/*^block*/ id)connectionResetBlock;
-(void)revokeAllAccessTokensForDeviceWithCompletion:(/*^block*/ id)arg1 ;
-(void)revokeAllAccessTokensForDevice;
-(void)revokeAccessTokenForAppWithOauthToken:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)init;
-(void).cxx_destruct;
@end
