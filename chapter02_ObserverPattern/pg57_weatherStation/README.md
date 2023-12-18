# Challenge Prompt

![prompt](/images/pg57-weatherStation.jpg)

# Solution Notes

A couple of changes than what is shown in the diagram just to simplify the exercise.
I only simplified items that I believe did not contribute to my understanding of the design pattern.

- Removed "DisplayElement" interface and included the Observers' print statements in the overridden update methods.
- Only implemented 2 observers instead of the 4 listed. Instead of having complicated functionality,
one observer is responsible for outputting Temperature and the other does Pressure.

# Output

> // Step 1 - Register both Temperature / Pressure Observers  
> WeatherData::registerObserver - numEntries= 1
> WeatherData::registerObserver - numEntries= 2  
>
> // Step 2 - Set measurement changes / notify observers from the subject    
> StatisticsDisplay::update - Temperature = 50 
> StatisticsDisplay::update - Pressure = 100  
>
> // Step 3 - Pressure Observer unsubscribes from Subject  
> WeatherData::removeObserver - numEntries= 1 
>
> // Step 4 - Set measurements / notify observers again, but notice that Pressure doesn't update  
> StatisticsDisplay::update - Temperature = 1

