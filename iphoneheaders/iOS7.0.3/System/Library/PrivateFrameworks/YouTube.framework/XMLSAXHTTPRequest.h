/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <YouTube/YouTube-Structs.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURLRequest, NSURLConnection, NSMutableData;

@interface XMLSAXHTTPRequest : NSObject <NSURLConnectionDelegate> {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	BOOL _invalidResponse;
	xmlSAXHandler* _saxHandler;

}
+(unsigned)uniqueQueryID;
+(id)serviceUnavailableError;
+(BOOL)anyRequestLoading;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(id)request;
-(BOOL)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)failWithError:(id)arg1 ;
-(void)willParseData;
-(void)didParseData;
-(void)_finishedLoading;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)loadStatusChanged;
-(void)_startedLoading;
@end
