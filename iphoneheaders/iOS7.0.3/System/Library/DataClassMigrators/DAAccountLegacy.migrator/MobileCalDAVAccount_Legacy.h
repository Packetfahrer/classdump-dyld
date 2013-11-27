/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAAccountLegacy/DALegacyAccount.h>

@class NSURL;

@interface MobileCalDAVAccount_Legacy : DALegacyAccount {

	NSURL* _originalPrincipalURL;

}
-(BOOL)upgradeAccountWithParent:(id)arg1 ;
-(id)_oldURLsForKeychain;
-(BOOL)_needsNewAccountIDForOldVersion:(int)arg1 ;
-(id)fullURLFromKey:(id)arg1 ;
-(void)_upgradeAccountToTelluride;
-(BOOL)_upgradeSelfFromVersion:(int)arg1 isChildAccount:(BOOL)arg2 ;
-(void)_upgradeiCloudAccountFromVersion:(int)arg1 ;
-(id)mainPrincipalProperties;
-(id)scheme;
-(id)host;
-(id)overriddenServer;
-(int)overriddenPort;
-(id)overriddenScheme;
-(id)serverBaseURL;
-(id)addUsernameToURL:(id)arg1 ;
-(void).cxx_destruct;
-(int)port;
@end
