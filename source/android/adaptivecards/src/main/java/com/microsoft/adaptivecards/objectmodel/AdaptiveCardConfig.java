/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.microsoft.adaptivecards.objectmodel;

public class AdaptiveCardConfig {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected AdaptiveCardConfig(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(AdaptiveCardConfig obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        AdaptiveCardObjectModelJNI.delete_AdaptiveCardConfig(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public void setPadding(SpacingDefinition value) {
    AdaptiveCardObjectModelJNI.AdaptiveCardConfig_padding_set(swigCPtr, this, SpacingDefinition.getCPtr(value), value);
  }

  public SpacingDefinition getPadding() {
    long cPtr = AdaptiveCardObjectModelJNI.AdaptiveCardConfig_padding_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SpacingDefinition(cPtr, false);
  }

  public void setBackgroundColor(String value) {
    AdaptiveCardObjectModelJNI.AdaptiveCardConfig_backgroundColor_set(swigCPtr, this, value);
  }

  public String getBackgroundColor() {
    return AdaptiveCardObjectModelJNI.AdaptiveCardConfig_backgroundColor_get(swigCPtr, this);
  }

  public static AdaptiveCardConfig Deserialize(SWIGTYPE_p_Json__Value json, AdaptiveCardConfig defaultValue) {
    return new AdaptiveCardConfig(AdaptiveCardObjectModelJNI.AdaptiveCardConfig_Deserialize(SWIGTYPE_p_Json__Value.getCPtr(json), AdaptiveCardConfig.getCPtr(defaultValue), defaultValue), true);
  }

  public AdaptiveCardConfig() {
    this(AdaptiveCardObjectModelJNI.new_AdaptiveCardConfig(), true);
  }

}
