/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Recents/Plugins/GenericAddressHandler.addresshandler/GenericAddressHandler
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CRAddressHandler <NSObject>
@required
-(id)externalAddressFromAddress:(id)arg1 kind:(id)arg2;
-(id)addressFromExternalAddress:(id)arg1 kind:(id)arg2;
-(id)syncKeyForAddress:(id)arg1 kind:(id)arg2;
-(id)supportedAddressKinds;
@end
