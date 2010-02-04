/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import <MapKit/MapKit.h>

@class TiMapView;

@interface TiMapAnnotationProxy : TiProxy<MKAnnotation> {
@private
	int tag;
	TiMapView *delegate;
}

// Center latitude and longitude of the annotion view.
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readwrite, assign) TiMapView *delegate;

// Title and subtitle for use by selection UI.
- (NSString *)title;
- (NSString *)subtitle;

- (MKPinAnnotationColor)pinColor;
- (BOOL)animatesDrop;

- (UIView*)leftViewAccessory;
- (UIView*)rightViewAccessory;

- (int)tag;

@end