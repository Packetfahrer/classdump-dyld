/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLProtocol.h>

@interface AppBundleURLProtocol : NSURLProtocol
+(void)registerProtocol;
+(id)URLScheme;
+(id)URLForResourceAtPath:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(void)initialize;
-(void)_sendURLErrorToClient:(int)arg1 withUserInfo:(id)arg2 ;
-(void)_sendURLErrorToClient:(int)arg1 forURL:(id)arg2 ;
-(void)_sendDataToClient:(id)arg1 forURL:(id)arg2 ;
-(void)startLoading;
-(void)stopLoading;
@end

