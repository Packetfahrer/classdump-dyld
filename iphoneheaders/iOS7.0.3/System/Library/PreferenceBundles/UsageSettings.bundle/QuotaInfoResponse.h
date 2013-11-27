/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, NSString;

@interface QuotaInfoResponse : AAResponse {

	BOOL _basicAccount;
	NSDictionary* _quotaInfo;
	NSDictionary* _storageInfo;
	NSDictionary* _accountStatus;
	NSDictionary* _urls;
	NSArray* _topToolbarItems;
	NSArray* _otherToolbarItems;

}

@property (nonatomic,readonly) NSString * manageStorageURLString; 
@property (nonatomic,readonly) NSString * appDetailsURLString; 
@property (nonatomic,readonly) NSString * totalStorageText; 
@property (nonatomic,readonly) NSString * availableStorageText; 
@property (nonatomic,readonly) NSDictionary * accountStatus;                   //@synthesize accountStatus=_accountStatus - In the implementation block
-(id)storageFooter:(BOOL)arg1 ;
-(id)accountStatus;
-(id)totalStorageText;
-(id)availableStorageText;
-(BOOL)hasPurchasedMoreStorage;
-(id)manageStorageURLString;
-(id)appDetailsURLString;
-(void)dealloc;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end
