/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadError.h>
#import <CoreFoundation/NSCopying.h>

@class NSError;

@interface DownloadGenericError : DownloadError <NSCopying> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(void)performActionForResponseFlags:(unsigned long)arg1 ;
-(BOOL)_isInstallError:(id)arg1 ;
-(id)_notificationTitle;
-(id)_notificationBody;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)error;
-(id)copyUserNotification;
-(id)initWithError:(id)arg1 ;
@end
