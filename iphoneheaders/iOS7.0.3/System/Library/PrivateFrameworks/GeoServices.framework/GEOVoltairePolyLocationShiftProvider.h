/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GEOLocationShiftProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltairePolyLocationShiftProvider : GEOLocationShiftProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/ id _errorHandler;
	/*^block*/ id _finishedHandler;

}
+(void)_resetURL;
+(unsigned short)providerID;
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)cancelRequest;
@end
