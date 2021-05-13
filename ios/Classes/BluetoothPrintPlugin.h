#import <Flutter/Flutter.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "ConnecterManager.h"

#define NAMESPACE @"bluetooth_printers"

@interface BluetoothPrintPlugin : NSObject<FlutterPlugin, CBCentralManagerDelegate, CBPeripheralDelegate>
@property(nonatomic,copy)ConnectDeviceState state;
@end

@interface BluetoothPrintStreamHandler : NSObject<FlutterStreamHandler>
@property FlutterEventSink sink;
@end
